int problemOne(){
   int sum = 0;
   int i;
   for (i = 0; i < 1000; i++){
      if(i%3==0 || i%5==0) sum += i;
   }
   return sum;
}

int problemSix(){
   int sum = 0;
   int sumOfSq = 0;
   int i;
   for(i = 1; i <= 100; i++){
      sum += i;
      sumOfSq += i*i;
   }
   int sqOfSum = sum*sum;
   return sqOfSum - sumOfSq;
}
