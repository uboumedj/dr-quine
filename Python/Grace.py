#Comment
STRING = "#Comment%(nl)cSTRING = %(qu)c%(string)s%(qu)c%(nl)cWRITE_MAP = {'nl': 10, 'qu': 34, 'string': STRING}%(nl)cGRACE_PROGRAM = exec('file = open(%(qu)cGrace_kid.py%(qu)c, %(qu)cw+%(qu)c); file.write(STRING %% WRITE_MAP); file.close()')%(nl)c%(nl)cGRACE_PROGRAM%(nl)c"
WRITE_MAP = {'nl': 10, 'qu': 34, 'string': STRING}
GRACE_PROGRAM = exec('file = open("Grace_kid.py", "w+"); file.write(STRING % WRITE_MAP); file.close()')

GRACE_PROGRAM
