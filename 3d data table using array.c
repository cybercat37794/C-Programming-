#include<stdio.h>
int main(){
int x = 3;
int y = 3;
int z = 3;
int three_d_array [3][3][3] = {
{{10 , 20, 30} ,{40 , 50, 60} ,{70 , 80, 90}} ,
{{11 , 21, 31} ,{41 , 51, 61} ,{71 , 81, 91}} ,
{{33 , 34, 35} ,{36 , 37, 38} ,{39 , 40, 41}}
};
// printing 3d array
int i,j,k;
for (i =0;i<x;i ++) {
for (j =0;j<y;j ++) {
for (k =0;k<z;k ++) {
printf ("%d\t", three_d_array [i][j][k]);
}
printf ("\n");
}
printf ("\n");}
return 0;
}
