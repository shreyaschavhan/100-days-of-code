# Contest 1 - Complexity Analysis and Basics Warm Up

## Details

* This contest is a part of [DSA Learning Series](https://www.codechef.com/LEARNDSA)
* __Topic of the Contest__ : Complexity Analysis + Basics Warm Up
* __Pre-requisite of the contest__ : NONE

## Learning Resources

* [Complexity Analysis](https://drive.google.com/file/d/0B-W-TWxgtybGd3dFUzg1OHNsM2M/view)
* [Big O Notation](https://www.youtube.com/watch?v=__vX2sjlpXU)
* [MCQ's on Big O](https://discuss.codechef.com/t/multiple-choice-questions-related-to-testing-knowledge-about-time-and-space-complexity-of-a-program/17976)

* A rule of thumb is that our computers do roughly 10^8 operations per second (this value gets outdated really fast). So to check whether our solution is correct, the first step is to ensure that the time complexity is good enough to meet the timing requirements of the problem (usually the time limit is 1 second). To do this, first calculate the worst case time using big O notation. Substitute the constraints and check if the value <= 10^8. For eg. our algorithm has a complexity of O(n^2) and n <= 10^6. Substituting n yields roughly 10^12 operations. Do note that this is not the exact number of operations, rather a rough estimate. Since 10^12 is much much bigger than 10^8, we can safely conclude that our algorithm won't run in under 1 second.

* Common arithmetic mistakes
    - **INT Overflow**
      Sum Three numbers

      Constraints : 0 < a,b,c < 10^9

      ```cpp
      int main(){
          int a , b,c;
          scanf(“%d %d %d”,&a,&b,&c);
          int ans = a + b + c;
          printf(“%d”,ans);
          return 0;
      }
      ```
      This program won't give correct output for all cases as 3 * 10^9 cannot be stored in INTS you need long long int or unsigned int (4 * 10^9). what if 0

     - **Comparing Doubles**

       ```cpp
       int main(){
           float a ;
           scanf(“%f”,&a);
           if(a == 10 ) printf(“YES”);
           return 0;
       }      
       ```

       float/double don’t have infinite precision. BEWARE ( 6/15 digit precision for them respectively)

     - **Negative Modulo**

       ```cpp
       int main(){
           int a = (10 - 12) % 5;
           if(a == -2) printf(“YES”);
           return 0;
       }
       ```

* [Modulo Arithmetic Explained](https://brilliant.org/wiki/modular-arithmetic/)
