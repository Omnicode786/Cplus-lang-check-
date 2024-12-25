int main(){
    int prof,cost;
    printf("Enter Your Profit: ");
    scanf("%d",&prof);

    printf("Enter Your Cost: ");
    scanf("%d",&cost);

    int profit = prof - cost;
    int loss = cost - prof;

    if (prof>cost){
        printf("Your Profit is %d",profit);
    }
    else if (cost>prof){
        printf("Your Loss is %d",loss);
    }

}
