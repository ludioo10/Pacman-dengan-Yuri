#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	char map[100][150]={
	"+==============================================================================================================================================+",
	"+                                  +           +                                                                        +       +              +",
	"+     +=====+   +=======+          +====  =====+                                                               +++       +     +               +",
	"+     +     +   +       +                               +==================       ====================+        + +        +   +       +        +",
	"+     +=====+   +=======+                               +                                             +        + +         + +       + +       +",
	"+                               +==============+        +                                             +        + +          +       +   +      +",
	"+     +====================+    +              +        +==================       ====================+        +++                 +     +     +",
	"+     +                    +    +              +                                                                                  +       +    +",
	"+     +                    +    +==============+                                                               +++++++++++++++++++++++++++++++ +",
	"+     +====================+                                                                                   +++++++++++++++++++++++++++++++ +",
	"+==============================================================================================================================================+",
	};
	for(int i = 0 ; i<11 ; i++){
		for(int j = 0 ; j <146 ; j++){
		cout<<map[i][j];
		}
	cout<<endl;
	}
	
}


