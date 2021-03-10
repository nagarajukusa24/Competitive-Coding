===============================================================================================
Inputs::
==============================================================================================
    n,c = input().split also works
    n,c = map(int,input().split())
    n,k = [int(x) for x in input().split()]
    input().split(maxsplit=1)   	#Accept int and string at once
******************************************************************************
    Array Inputs Single Line::
        import sys			--> Single Line Input in Python
        f = sys.stdin
        #n = int(f.readline())
        A = [int(x) for x in f.readline().split()]
	li = [int(x) for x in input().split()]
********************************************************************************
=============================================================================================

string.lower() ==> Converts upper case to lower case
String.upper()

Converting string into list...!
str = "nagaraj"
list1 = list(str) 
===============================================================================================
Shortcuts & Techiniques::
===============================================================================================
    sum(range(n))  --> Sum of 'n' natural numbers   
    list(range(n)) --> List of 'n' numbers

    List Operations:
        list.append('param')
        list.extend('param')
        list.count('param')
        list.reverse()
        list.sort()
        list.index('param')
        list.remove('param')
        list.clear()
        list.copy()
    
    Sets Operations::
         a = set('abracadabra')
         b = set('alacazam')
         a                                  # unique letters in a
        {'a', 'r', 'b', 'c', 'd'}
         a - b                              # letters in a but not in b
        {'r', 'd', 'b'}
         a | b                              # letters in a or b or both
        {'a', 'c', 'r', 'd', 'b', 'm', 'z', 'l'}
         a & b                              # letters in both a and b
        {'a', 'c'}
         a ^ b                              # letters in a or b but not both
        {'r', 'd', 'b', 'm', 'z', 'l'}

    Stacks & Queues::
        stack = []   ***************** #Last In - First Out Algo **************
        stack.append('param')
        stack.pop()

        from collections import deque
        queue = deque(["Eric", "John", "Michael"])
        queue.append('param')
        queue.popleft()

    Squares calculation::
        squares = list(map(lambda x: x**2, range(10)))
        squares = [x**2 for x in range(10)]

    *************Command Line Args*******************
            if __name__ == "__main__":
            import sys
            fib(int(sys.argv[1]))
===============================================================================================


=================================================================================================
Floatin Points Output::
=================================================================================================
    print('%.2f'%a) --> decimal precission upto 2 floating points
    print('{0:.2f}'.format(a)) --> another way for floating point representaiton

***************************************
==================================================================================================





==================================================================================================
Sample Code::
====================================================================================================
      ******************Python Code for String reversal***********
            for _ in range(int(input())):
                s = input()
                words = s.split('.')
                strings = []
                for word in words:
                    strings.insert(0,word)
                
                print(".".join(strings))
    *************************************************************

    ******************Shortcut for Fibonacci series:**********************
            a,b = 0,1
            while a < 100:
                print(a,',')
                a,b = b,a+b
    ***********************************************************************

======================================================================================================

To overcome Time Limit Exceeded Error::-
    import psyco
    psyco.full()
