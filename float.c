#include  <stdio.h>
void calculate(float value);
int main(){
    float value=100;
    calculate(value);
    return 0;

}
void calculate(float value){
    value=value+(.20*value);
    printf(" ur total is =%f",value);
}