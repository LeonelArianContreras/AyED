//CALCULAR PHI
#include<iostream>
#include<iomanip>
using namespace std;

	int main() {
	double phi=4,x=-3,suc;                    
		while(phi<=(3.141592) || phi>=(3.1415924)){                //Ingreso un while para que se itere entre esa cantidad de veces la variable "suc", para luego sumarle "phi".
			suc=(4/x);
			phi+=suc;
				if(suc<0){
					x=(x-2)*(-1);
				}
				else if(suc>0){
					x=(x+2)*(-1);
				}
										
		}
		
		cout<<setprecision(7)<<phi;
	
		return 0;
	}	
