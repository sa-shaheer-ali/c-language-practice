#include <stdio.h>
void menu(){
    printf("Cafe Menu \n");
    printf("1. Coffee /-Rs 200\n");
    printf("2. Biscuits /-Rs 100\n");
    printf("3. Donuts /-RS 140\n");
    printf("==============\n");


}
float totalbill(int item,int quantity,float *price){
    switch (item)
    {
    case 1:
        *price=200;
        break;
        case 2:
        *price=100;
        break;
        case 3:
        *price=140;
        break;

    
    default:
    printf("please brother/sister look in the menu clearfully\n");

       return -1;

    }
    return (*price)*quantity;

}
void paymentrecieved(float bill,float payment){
    if (payment <bill)
    {printf("please pay full amount,thankyou");

        /* code */
    }
    else{
        float balance=payment-bill;
        printf("%.3f your total bill\n",bill);
        printf("%.3f enter payment\n",payment);
         printf("%.3f balance \n", balance);
    }
    
}
int main (){
    int item,quantity;
    float price,result,payment;
    menu();
    printf("thankyou for coming enter your order:)");
    scanf("%d",&item);
    printf("Enter quantity: ");
   scanf("%d",&quantity);
    result=totalbill(item,quantity,&price);
    if (result!=-1)
    {printf("enter payment amount:");
    scanf("%f",&payment);

       paymentrecieved(result,payment);
    }
    return 0;

    
}