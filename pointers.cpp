#include <iostream>
using namespace std;
void analyze_pointer(int *ptr) {
		cout << "Memory Address Pointed by Pointer: " << ptr << endl; //ptr has address
			cout << "Value at the above address: " << *ptr << endl; //*ptr dereference the value
			}
			int main() {
					int iValue = 1453;
						cout << "Stack Variable" << endl;
							analyze_pointer(&iValue); //here &operator passes the address to the pointer in funcion
								int* heapthing = new int;  // Allocates memory on the heap for an integer
									*heapthing = 911;
										cout << "Heap Variable" << endl;
											analyze_pointer(heapthing);// passing heap pointer to funcion
												system("pause");
													return 0;	
													}
													
			
