$
$
$ vi app.py
$ python3 app.py | tee output.txt
<__main__.Point object at 0x7f7798797940>
$ vi app.py
$ python3 app.py | tee output.txt
  File "app.py", line 10
    return 'Point(point :'+str(self.x)+','+str(self.y)+','str(self.z)+ ')'
                                                            ^
SyntaxError: invalid syntax
$ vi app.py
$ python3 app.py | tee output.txt
Point(point :4,2,9)