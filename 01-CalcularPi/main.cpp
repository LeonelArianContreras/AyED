//CALCULAR PHI
#include<iostream>
#include<iomanip>
using namespace std;

	int main() {								//Creo la funcion int main, donde declaro las constantes y la variable.
	double phi=4,x=-3,suc;                    
		for(int i=0;i<=1000000;i++){
			suc=(4/x);							
			phi+=suc;							//Ingreso un while para que se itere esa cantidad de veces la variable "suc", para luego sumarle "phi".
				if(suc<0){						
					x=(x-2)*(-1);
				}								//Ingreso dos condiciones para que se pueda alternar la suma y resta como se expresa en la fórmula de Leibniz. 
				else if(suc>0){					//Si suc es negativo, entonces restale dos y convertilo en positivo. Si es positivo, sumale dos y convertilo en negativo.
					x=(x+2)*(-1);				//De esta forma logre la intercalacion de suma y resta, y que el denominador vaya de numero primo en primo.
				}
										
		}
		
		cout<<setprecision(7)<<phi;				//Para poder acotar los decimales en 6 cifras, use la libreria dada junto con este codigo.
	
		return 0;
	}	
