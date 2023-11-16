import sys
from Module_test1_2 import prinnnt as pr
from Module_test1_2 import fib as fi
pr()
print("->",__name__)

print(len(sys.argv))
fi(int(sys.argv[1]))
