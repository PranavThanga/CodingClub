s, B = input().split()
s = int(s) + int(B)
print(f"{s}\n" + ("HIGH SCORE!" if s >= 1000 else "KEEP CHOMPING!"))