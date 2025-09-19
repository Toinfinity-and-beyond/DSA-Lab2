#include <iostream>   
#include <string>     
using namespace std;
int main() {
		string* input_string = new string;
			cout << "Enter Your String: ";
				// Read the entire line of input into the dynamically allocated string
					getline(cin, *input_string);
						// Get the length of the input string
							int length = input_string->length();
								for (int i = 0; i < length / 2; i++) {
											// Swap characters from the start and end moving toward the center
													char temp = (*input_string)[i];
															(*input_string)[i] = (*input_string)[length - i - 1];
																	(*input_string)[length - i - 1] = temp;
																		}
																			cout << "Reversed String: " << *input_string << endl;
																				// Free the dynamically allocated memory
																					delete input_string;
																						system("pause");
																							return 0;
																							}
																							
								
