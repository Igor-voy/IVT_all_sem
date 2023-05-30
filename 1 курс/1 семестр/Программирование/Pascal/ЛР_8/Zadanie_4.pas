program l8;
var x,S0,U0,M,e:real;
k:integer;
begin
e:=0.0001;
x:=3.14/6;
U0:=1;
S0:=1;
k:=1;
while abs(U0)>e do
begin
M:=-x*x/(4*k*k-2*k);
U0:=M*U0;
k:=k+1;
S0:=S0+U0;
end;
writeln('cos(x) = ',S0:1:4);
readln();
end.   