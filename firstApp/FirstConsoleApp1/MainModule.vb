Module MainModule

    ' Global variables that are available to the entire module
    Dim tol As Double = 0.00000001      ' tolerance
    Dim maxIters As Integer = 100       ' number of iterations
    Dim root As Double                  ' variable to store root value


    Sub Main()

        ' Run test sub routines on three polynomials:

        Console.WriteLine("Attempting to get roots for y = x^3:")
        TestSecantOne()
        Console.WriteLine("--------------------------------------" & vbCrLf)
        Console.WriteLine("Click any key to continue" & vbCrLf)
        Console.ReadKey()

        Console.WriteLine("Attempting to get roots for y = x^2 + 1:")
        TestSecantTwo()
        Console.WriteLine("--------------------------------------" & vbCrLf)
        Console.WriteLine("Click any key to continue" & vbCrLf)
        Console.ReadKey()

        Console.WriteLine("Attempting to get roots for y = -2x^3 + x^2 - x + 0.5:")
        TestSecantThree()
        Console.WriteLine("--------------------------------------" & vbCrLf)
        Console.WriteLine("Click any key to quit" & vbCrLf)
        Console.ReadKey()

    End Sub

    ' Test Subroutines to attempt to find roots for the following polynomials:

    ' a) TestSecantOne():  y = x^3, initial guesses x0 = -1 , x1 = 1, tol = 0.00000001, maxIters =100
    Public Sub TestSecantOne()
        Dim vec0() As Double = {1, 0, 0, 0}     ' Set vector of polynomial coefficients
        Dim x0 As Double = -1                   ' Set initial guess
        Dim x1 As Double = 1                    ' Set initial guess

        root = CubicSecant(vec0, x0, x1, tol, maxIters)     ' try to get root 

        displayRoot(root)                       ' Display results

    End Sub


    ' b) TestSecantTwo():  y = x^2 + 1, initial guesses x0 = -0.5, x1 = 1, 
    '    tol = 0.00000001, maxIters =100
    Public Sub TestSecantTwo()
        Dim vec0() As Double = {0, 1, 0, 1}
        Dim x0 As Double = -0.5
        Dim x1 As Double = 1

        root = CubicSecant(vec0, x0, x1, tol, maxIters)

        displayRoot(root)

    End Sub

    ' c) TestSecantThree():  y = -2x^3 + x^2 - x + 0.5, initial guesses x0 = -1, 
    '    x1 = 1, tol = 0.00000001, maxIters =100
    Public Sub TestSecantThree()
        Dim vec0() As Double = {-2, 1, -1, 0.5}
        Dim x0 As Double = -1
        Dim x1 As Double = 1

        root = CubicSecant(vec0, x0, x1, tol, maxIters)

        displayRoot(root)

    End Sub

    ' displayRoot(.) to display root values
    Public Sub displayRoot(ByVal root)
        If Double.IsNaN(root) Then          ' Check if root is a NaN
            Console.WriteLine("No root found.")
            Console.WriteLine("No convergence after 100 iterations.")
        Else
            Console.WriteLine("A root was found at x = {0}", root)
        End If
    End Sub

End Module
