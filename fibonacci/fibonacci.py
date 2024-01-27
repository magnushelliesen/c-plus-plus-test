from subprocess import run, PIPE
from pathlib import Path
from decimal import Decimal


def fibbonachi(n):
    """Calculates the fibbonachi number of order n.

    Parameters
    ----------
    n : int
        Integer for which order the fibbonachi number is to be calculated.

    Returns
    -------
    int
        The n'th fibbonachi number.
    """

    # Call the executable
    result = run([f'{Path(__file__).parent.resolve() / "fibbonachi"}', str(n)], stdout=PIPE, encoding='utf-8')

    # I have to go via float to read scientific notation to int
    return int(Decimal(result.stdout.strip()))
