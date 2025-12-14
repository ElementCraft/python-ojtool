from ojtool import IO
from ojtool.utils import *

io = IO(1)

class T:
    def data_1(self, id):
        io.write(3,5,6,6)
        io.writeln()
        io.write(3,5,6)
        io.writeln(3,5,6)
        io.writeln(3,3,3)
        io.writeln(prime(12, 19))

io.done(T())