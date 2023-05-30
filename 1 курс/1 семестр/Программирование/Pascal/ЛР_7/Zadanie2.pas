program l7;
var e,x1,x2,x:real;
function f(o:real):real;
begin
f:=o*o*o*o-1-cos(o);
end;
function f1(p:real):real;
begin
f1:=4*p*p*p+sin(p);
end;
begin
e:=0.000001;
x1:=-15; x2:=15;
if f(x1)*f1(x1)>0 then x:=x1
else x:=x2;
while abs(f(x))>e do begin
x:=x-f(x)/f1(x);
end;
writeln('x = ',x:2:3,' f(x)= ', f(x));
readln();
end.  