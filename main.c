#include<stdio.h>
#include<math.h>

float ans(long int Wavelength)
{
  float energy,energy1;
  double frequency;
  energy = (1.98 * pow (10, -27)) / (Wavelength * pow (10,-10));
  energy1 = (energy)*100 / (1.6 * pow (10, -19));
  return energy1;
}
int main()
{
  long int Wavelength1;
  float a;
  double frequency;
  printf ("Enter the Wavelength of the radiation in Angstroms\n");
  scanf ("%ld", &Wavelength1);
  a = ans(Wavelength1);
  printf ("Energy of the given radiation would be %f eV.",a);
  if(a<=123.75 && a>=3.17)
  printf("\n\nThe given wavelength falls in Region of UV Rays.");
  else if(a<=1.57 && a>=0.001238)
  printf("\n\nThe given wavelength falls in the Region of Infrared Rays.");
  else if(a<0.001238)
  printf("\n\nThe given wavelength falls in the Region of Radio Waves.");
  if(a<=1.98 && a>=1.58)
  printf("\n\nThe given wavelenght falls in visible spectrum, the color being red.");
  else if(a>=1.99&&a<=2.07)
  printf("\n\nThe given wavelenght falls in visible spectrum, the color being orange.");
  else if(a>=2.08 && a<=2.14)
  printf("\n\nThe given wavelenght falls in visible spectrum, the color being yellow.");
  else if(a>=2.15 && a<=2.51)
  printf("\n\nThe given wavelenght falls in visible spectrum, the color being green.");
  else if(a>=2.52 && a<=2.71)
  printf("\n\nThe given wavelenght falls in visible spectrum, the color being blue.");
  else if(a>=2.72 && a<3.173)
  printf("\n\nThe given wavelenght falls in visible spectrum, the color being violet.");
  //This part is for determination if the radiaion is harmfull for us. 
  if(a>=10)
  printf("\n\nHarmfull radiation! Beware."); 
  else
  printf("\n\nSafe!");
  if(a>=1.58&&a<=3.17)
  //This part provides wether we can see this radiaion.
  printf("\n\nThe given radiaion would be visible.");
  else
  printf("\n\nThe given radition would be invisible.");
  //this will show the frequency
  frequency=(3*pow(10,8)) / (Wavelength1*pow(10,-10));
  printf("\n\nThe frequency of the given radiation is %e Hz.", frequency);
  return 0;
 }
