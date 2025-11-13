//Q3. write a program to check whether a number is a perfect or not.

class Logic
{
    void checkPerfect(int num)
    {
       int iCnt = 0, iSum = 0;

       if(num < 0)
       {
            num = -num;
       }

       for(iCnt = (num/2); iCnt >= (iCnt >= 1) && (iSum < num); iCnt--) 

       {
            if((num % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
       }

       if(iSum == num)
       {
            System.out.println(num + "Number is perfect numbere");
       }
       else
       {
            System.out.println(num + "Number is not perfect numbere");
       }
    }
}

class A20Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}

//This code have 4 version avaiable in lb practice folder avaiable 