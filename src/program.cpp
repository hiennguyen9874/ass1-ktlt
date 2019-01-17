#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <iomanip>
#define NUM_SAMPLES 20000
#define khoang(a,b,c) ((a)+((b)-(a))*(c/10))

using namespace std;

typedef struct
{
	double x, t;
}datainput;

int main()
{
	string line, str;
	int num_iterations, num_folds;
	double learning_rate, start_a, start_b;
	getline(cin, line);
	getline(cin, line);
	getline(cin, line);
	getline(cin, line); stringstream ss(line);
	ss >> str; ss >> num_iterations;
	getline(cin, line); stringstream ss1(line);
	ss1 >> str; ss1 >> learning_rate;
	getline(cin, line); stringstream ss2(line);
	ss2 >> str; ss2 >> start_a;
	getline(cin, line); stringstream ss3(line);
	ss3 >> str; ss3 >> start_b;
	getline(cin, line); stringstream ss4(line);
	ss4 >> str; ss4 >> num_folds;
	getline(cin, line);
	getline(cin, line);
	getline(cin, line);
	datainput dulieu[NUM_SAMPLES];
	int i = 0;
	while (getline(cin, line))
	{
		if (line=="")
		{
		}
		else
		{
			stringstream ss5(line);
			ss5 >> dulieu[i].x; ss5 >> dulieu[i].t;
			i++;
		}
	}
	int d = (i + 1) / num_folds;
	for (int j = 1; j <= num_folds; j++)
	{
		datainput tst[NUM_SAMPLES];
		int k = 0;
		if (j == num_folds)
		{
			for (; k < (d + i % d); k++)
			{
				tst[k].x = dulieu[(j - 1) * d + k].x;
				tst[k].t = dulieu[(j - 1) * d + k].t;
			}
		}
		else
		{
			for (; k < d; k++)
			{
				tst[k].x = dulieu[(j - 1) * d + k].x;
				tst[k].t = dulieu[(j - 1) * d + k].t;
			}
		}
		datainput trn[NUM_SAMPLES];
		int l = 0;
		for (; l < (j - 1)*d; l++)
		{
			trn[l].x = dulieu[l].x;
			trn[l].t = dulieu[l].t;
		}
		for (; l < (i - k); l++)
		{
			trn[l].x = dulieu[l + d].x;
			trn[l].t = dulieu[l + d].t;
		}
		double a = start_a;
		double b = start_b;
		for (int g = 0; g < num_iterations; g++)
		{
			double gradien_a = 0, gradien_b = 0, ga, gb;
			for (int h = 0; h <l; h++)
			{
				gradien_a = gradien_a + (a*trn[h].x + b - trn[h].t)*trn[h].x;
				gradien_b = gradien_b + (a*trn[h].x + b - trn[h].t);
			}
			ga = gradien_a / sqrt(gradien_a*gradien_a + gradien_b*gradien_b);
			gb = gradien_b / sqrt(gradien_a*gradien_a + gradien_b*gradien_b);
			a = a - learning_rate*ga;
			b = b - learning_rate*gb;
		}
		double erm_2 = 0, erm, etb = 0;
		for (int g = 0; g < k; g++)
		{
			erm_2 = erm_2 + (a*tst[g].x + b - tst[g].t) *(a*tst[g].x + b - tst[g].t);
			etb = etb + ((a*tst[g].x + b - tst[g].t) / k);
		}
		erm = sqrt(erm_2 / k);
		double o_2 = 0;
		for (int g = 0; g < k; g++)
		{
			o_2 = o_2 + (a*tst[g].x + b - tst[g].t - etb) *(a*tst[g].x + b - tst[g].t - etb);
		}
		double Vmin = etb-(3)* sqrt(o_2 / k);
		double Vmax = etb+(3)* sqrt(o_2 / k);
		double ka[10] = {0,0,0,0,0,0,0,0,0,0};
		for (int g = 0; g < k; g++)
		{
			double ei = a*tst[g].x + b - tst[g].t;
			if (ei<Vmin)
			{
			}
			else if (ei < khoang(Vmin, Vmax, 1.0))
			{
				ka[0] = ka[0] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 2.0))
			{
				ka[1] = ka[1] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 3.0))
			{
				ka[2] = ka[2] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 4.0))
			{
				ka[3] = ka[3] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 5.0))
			{
				ka[4] = ka[4] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 6.0))
			{
				ka[5] = ka[5] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 7.0))
			{
				ka[6] = ka[6] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 8.0))
			{
				ka[7] = ka[7] + 1.0;
			}
			else if (ei < khoang(Vmin, Vmax, 9.0))
			{
				ka[8] = ka[8] + 1.0;
			}
			else if (ei <= Vmax)
			{
				ka[9] = ka[9] + 1.0;
			}
		}
		double tong=0;
		for (int g = 0; g < 10; g++)
		{
			tong = tong + ka[g];
		}
		cout << fixed << setprecision(5) << right << a
			<< setw(10) << fixed << setprecision(5) << right << b
			<< setw(10) << fixed << setprecision(5) << right << erm
			<< setw(10) << fixed << setprecision(5) << right << ka[0] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[1] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[2] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[3] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[4] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[5] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[6] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[7] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[8] / tong
			<< setw(10) << fixed << setprecision(5) << right << ka[9] / tong;
		cout << endl;
	}
	return 0;
}