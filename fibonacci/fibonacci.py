from subprocess import run, PIPE
from pathlib import Path
from decimal import Decimal


def fibonacci(n, cpp=True, recursion=False):
    """Calculates the fibonacci number of order n.

    Parameters
    ----------
    n : int
        Integer for which order the fibonacci number is to be calculated.

    Returns
    -------
    int
        The n'th fibonacci number.
    """

    if cpp:
        # Call the executable
        result = run([f'{Path(__file__).parent.resolve() / "fibonacci"}', str(n), str(recursion)], stdout=PIPE, encoding='utf-8')

        # I have to go via float to read scientific notation to int
        return int(Decimal(result.stdout.strip()))
    else:
        return fibonacci_py(n, recursion)

def fibonacci_py(n, recursion):
    if recursion:
        return fibonacci_py_recursion(n)
    else:
        return fibonacci_py_iteration(n)

def fibonacci_py_recursion(n):
    if n < 2:
        return n
    else:
        return fibonacci_py_recursion(n-1)+fibonacci_py_recursion(n-2)

def fibonacci_py_iteration(n):
    n1, n2 = 1, 0
    for i in range(n):
        if i < 2:
            n0 = i+1
        else:
            n0 = n1+n2
            n2 = n1
            n1 = n0
    return n0
