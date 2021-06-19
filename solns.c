/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int n)
{
	int max = a[0];
	for(int i=0;i<n;i++)
  
		if(a[i]> max)
		max= a[i];
		
return max;
}

int min(int a[], int n)
{
	int min = a[0];
	for(int i=0;i<n;i++)
  
		if(a[i]< min)
		min = a[i];
		
return min;
}

float average(int a[], int n)
{
	float avg;
  int sum =0;
  
	for(int i=0;i<n;i++)
	sum+=a[i];
	
	avg= sum/(float)n;
  
	return avg;
}

int mode(int a[], int n)
{
	int mode1 = 0;
	int freq = 0;
  
	for(int i=0; i<=n-1; i++)
  {
		int count = 0;
		for(int j=0; j<=n-1; j++)
    
			if(a[i]==a[j])
				count++;
			
		if(count > freq)
    {
			freq = count;
			mode1 = a[i];
		}
	}
	return mode1;
}

int factors(int n, int a[])
{
	int k = 0;
	for(int i=2; i<=n; ++i)
  {
		while(n%i==0)
    {
			a[k] = i;
			k++;
			n=n/i;
		}
	}
	return k;
}


