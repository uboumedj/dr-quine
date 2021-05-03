import os

def main():
	i = 5
	if (os.path.exists("Sully_%d.py" % i)):
		i -= 1
	if (i < 0):
		exit()
	str = "import os%(nl)c%(nl)cdef main():%(nl)c%(tab)ci = %(num)d%(nl)c%(tab)cif (os.path.exists(%(qu)cSully_%%d.py%(qu)c %% i)):%(nl)c%(tab)c%(tab)ci -= 1%(nl)c%(tab)cif (i < 0):%(nl)c%(tab)c%(tab)cexit()%(nl)c%(tab)cstr = %(qu)c%(string)s%(qu)c%(nl)c%(tab)cwrite_map = {'nl': 10, 'qu': 34, 'tab': 9, 'string': str, 'num': i}%(nl)c%(tab)cfile = open(%(qu)cSully_%%d.py%(qu)c %% i, %(qu)cw+%(qu)c)%(nl)c%(tab)cfile.write(str %% write_map)%(nl)c%(tab)cfile.close()%(nl)c%(tab)cif (i > 0):%(nl)c%(tab)c%(tab)cos.system(%(qu)cpython3 Sully_%%d.py%(qu)c %% i)%(nl)c%(nl)cif __name__ == %(qu)c__main__%(qu)c:%(nl)c%(tab)cmain()%(nl)c"
	write_map = {'nl': 10, 'qu': 34, 'tab': 9, 'string': str, 'num': i}
	file = open("Sully_%d.py" % i, "w+")
	file.write(str % write_map)
	file.close()
	if (i > 0):
		os.system("python3 Sully_%d.py" % i)

if __name__ == "__main__":
	main()
