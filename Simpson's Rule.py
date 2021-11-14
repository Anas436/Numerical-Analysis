
"""
    Numerical Analysis Lab Final Exam using Python programming Language.
    Topic : Simpson's Rule.
    Name : Md. Anas Mondol
    ID : 1935202011
    Batch : 52nd-(A)
    City University, Permanent Campus.

 """

def f(x) :

    return (x**3-4*x**2+5*x-7)


def SimpsonRule(x0, xn, n):

    h= (xn-x0)/n

    integration = f(x0)+f(xn)

    for i in range(1, n):

        k= x0+i*h

        if i % 2 == 0:

            integration = integration + 2 * f(k)


        else :

            integration = integration + 4 * f(k)

    integration = integration * h/3

    return integration


lower_limit = float(input("\nEnter your Lower Limit of Integration : "))
upper_Limit = float(input("\nEnter your Upper Limit of Integration : "))
sub_interval = int(input("\nEnter your number of Sub Interval : "))


showing = SimpsonRule(lower_limit, upper_Limit, sub_interval)

print("\nIntegration result by Simpson method is : %f "%(showing))











