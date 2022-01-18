
No=int(input())
String=input()
Queries=int(input())
for i in range(Queries):
  Position = int(input())
  print(String.count(String[Position-1],0,Position-1))