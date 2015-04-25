#include <iostream>
using namespace std;
 
int main()
{
	float u[10],v[10];
	float punto[10]={0};
	float total=0;
	int n,m;
 
	cout<< "Dame el tamaño del primer vector" << endl;
	cin>>n;
	cout<<"Dame el tamaño del segundo vector" << endl;
	cin>>m;
 
	if(n!=m)
 
	{
		cout<<"Not same size vectors";
 
 
	}
	else{
		cout<<"Dame los numeros del primer vector" << endl;
		for(int i=0;i<n;i++)
		    cin>>u[i];
		cout<<"Dame los numeros del segundo vector" << endl;
		for(int j=0;j<m;j++)
		   cin>>v[j];
	
	for(int l=0; l<m;l++)	{
			punto[l]=u[l]*v[l];
	total+=punto[l];
	}
 
	cout<<endl;
	cout<<" producto punto: "<<total<<endl;
 }
}