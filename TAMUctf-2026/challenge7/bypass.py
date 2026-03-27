import gdb
class Hook(gdb.Breakpoint):
    def stop(self):
        gdb.execute('return 0')
        return False
Hook('strtoul')
