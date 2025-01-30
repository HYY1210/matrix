

#include<bits/stdc++.h>
#include <chrono>
//#pragma GCC optimize(3,"Ofast","inline")
using namespace std;
const int n=1024;
int main()
{
	int *p;
	p=(int *)malloc(n*n*sizeof(int));
	int *q;
	q=(int *)malloc(n*n*sizeof(int));
	int *c;
	c=(int *)malloc(n*n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			p[i*n+j]=1;
			q[i*n+j]=1;
			c[i*n+j]=0;
		}
	}
	auto start = std::chrono::high_resolution_clock::now();

	  for(int i=0;i<n;i++)
	  {
	  for(int j=0;j<n;j++)
	  {
	  int b=0;
	  for(int k=0;k<n;k++)
	  {

	  b+=p[i*n+k]*q[k*n+j];

	  }
	  c[i*n+j]=b;

	  }

	  }
	/****
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			for(int k=0;k<n;k++)
			{

				c[i*n+j]+=p[i*n+k]*q[k*n+j];

			}
			

		}

	}
	*/
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> duration = end - start;
#ifdef DEBUG
	for(int i=0;i<8;i++)
	{

		for(int j=0;j<8;j++)
		{
			cout<<c[i*n+j]<<" ";
		}
		cout<<endl;
	}
	std::cout << "Elapsed time: " << duration.count() << " seconds" << std::endl;
#endif
	return 0;
}

