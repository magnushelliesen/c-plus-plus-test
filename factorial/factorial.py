from subprocess import run, call, PIPE
from pathlib import Path


def factorial(n):
    """_summary_

    Parameters
    ----------
    n : int
        Integer for which the factorial is to be calculated.

    Returns
    -------
    int
        The factorial of n
    """

    # Call the executable
    result = run([f'{Path(__file__).parent.resolve() / "factorial"}', str(n)], stdout=PIPE, encoding='utf-8')

    # I have to go via float to read scientific notation to int
    return int(float(result.stdout.strip()))
