Module Polyroot
    ' Polyroot Module Description:

    ' Implements the Secant Method for determining the root of a cubic polynomial a x3 + b x2 + cx + d

    ' Contains two functions:

    ' Function Poly(.) that will return the value of an arbitrary cubic polynomial.
    ' Poly(.) takes a vector, v, that contains the four constants in the polynomial, 
    ' and a value x at which the function is to be evaluated.

    ' Function CubicSecant(.) takes the same vector, v, of polynomial constants, 
    ' initial guesses x0 And x1 for the Secant Method algorithm, 
    ' a tolerance value tol For convergence, 
    ' and an integer value maxIters that represents the maximum number Of iterations.
    ' We implement the algorithm inside this function, but call Poly(.) on each iteration
    ' to get the updated value of the cubic polynomial function.
    ' Return the root found, or where there is no convergence, return "Double.NaN" 
    ' "Double.NaN" is the VB.NET method For indicating "Not a Number"

    ' CubicSecant(.) is called from the outside world so is declared 'Public'
    ' Poly(.) is called only by the CubicSecant(.) function inside this module, and is declared 'Private'

    '----------------------------------------------------------------------------------------------------

    ' Function Definitions:

    ' Function Poly(.)
    Private Function Poly(ByVal v As Double(), ByVal x As Double) As Double
        Dim result As Double = 0.0           ' accumulator
        Dim y As Integer = v.Length - 1      ' exponent

        For Each i As Integer In v
            result += i * Math.Pow(x, y)     ' add  to result the coef multiplied by x^exponent
            y -= 1                           ' decrement exponent
        Next

        Poly = result

    End Function

    ' Function CubicSecant(.)
    ' Formula for Secant Method: 
    ' Xn+1 = Xn – f(Xn) * ((Xn – Xn-1) / (f(Xn) – f(Xn-1)))
    Public Function CubicSecant(ByVal v As Double(), ByVal x0 As Double,
                                ByVal x1 As Double, ByVal tol As Integer,
                                ByVal maxIters As Integer) As Double
        Dim Xc As Double = x0        ' current value of X
        Dim Xp As Double = x1        ' previous value of X
        Dim Xu As Double             ' updated value of X

        ' Loop up to maxIters times
        ' On each iteration:
        '   Update Xu, Xp, And Xc
        '   Return Xu only if difference (absolute) between Xc and Xp is within tolerance

        For i As Integer = 1 To maxIters
            Xu = Xc - Poly(v, Xc) * ((Xc - Xp) / (Poly(v, Xc) - Poly(v, Xp)))
            Xp = Xc
            Xc = Xu

            If Math.Abs(Xc - Xp) <= tol Then    ' root found
                Return Xu
            End If
        Next

        Return Double.NaN       ' no convegergence

    End Function

End Module
