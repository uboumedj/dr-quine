def auto_print(str):
	print(str % {'nl': 10, 'qu': 34, 'tab': 9, 'string': str})

#Outer comment

def main():
	#Inner comment
	str = "def auto_print(str):%(nl)c%(tab)cprint(str %% {'nl': 10, 'qu': 34, 'tab': 9, 'string': str})%(nl)c%(nl)c#Outer comment%(nl)c%(nl)cdef main():%(nl)c%(tab)c#Inner comment%(nl)c%(tab)cstr = %(qu)c%(string)s%(qu)c%(nl)c%(tab)cauto_print(str)%(nl)c%(nl)cif __name__ == %(qu)c__main__%(qu)c:%(nl)c%(tab)cmain()"
	auto_print(str)

if __name__ == "__main__":
	main()
