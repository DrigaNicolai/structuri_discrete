Program Cod_Apartenenta;
uses crt;
var
 a, b:boolean;
procedure Stroka(num_col: integer; lev, lin, seredina, pravo: char);
var
  i,j: byte;
begin
  write(lev);
  for j:=1 to num_col-1 do begin
    for i:=1 to 7 do write(lin); write(seredina);
  end;
  for i:=1 to 7 do write(lin); writeln(pravo);
end;
begin
  clrscr;
  writeln('Proiect nr.1, elaborat de Driga Nicolai');
  writeln('Tablita istinnosti');
  writeln('Dopolnenie');
  Stroka(2, #201, #205, #209, #187);
  writeln(#186, 'A':4, #179:4, ' not A ', #186);
  Stroka(2, #199, #196, #197, #182);
  for a:=false to true do 
    writeln(#186, a:6, #179:2, (not a):6, #186:2);
  Stroka(2, #200, #205, #207, #188);
  
  writeln('Peresechenie');
  Stroka(3, #201, #205, #209, #187);
  writeln(#186, 'A':4, #179:4, 'B':4, #179:4,'A and B', #186);
  Stroka(3, #199, #196, #197, #182);
  for a:=false to true do
  for b:=false to true do
    writeln(#186, a:6, #179:2,b:6, #179:2, (a and b):6, #186:2);
  Stroka(3, #200, #205, #207, #188);
  
  writeln('Obiedinenie');
  Stroka(3, #201, #205, #209, #187);
  writeln(#186, 'A':4, #179:4, 'B':4, #179:4,'A or B':7, #186);
  Stroka(3, #199, #196, #197, #182);
  for a:=false to true do
  for b:=false to true do
    writeln(#186, a:6, #179:2,b:6, #179:2, (a or b):6, #186:2);
  Stroka(3, #200, #205, #207, #188);
  
  writeln('XOR');
  Stroka(3, #201, #205, #209, #187);
  writeln(#186, 'A':4, #179:4, 'B':4, #179:4,'A xor B', #186);
  Stroka(3, #199, #196, #197, #182);
  for a:=false to true do
  for b:=false to true do
    writeln(#186, a:6, #179:2,b:6, #179:2, (a xor b):6, #186:2);
  Stroka(3, #200, #205, #207, #188);
readkey;
end.