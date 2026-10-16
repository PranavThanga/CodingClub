m, n = input().split(" ")
print("PAC-MAN ESCAPES!" if int(m) > int(n) else "TOO CLOSE!" if int(m) == int(n) else "GHOST WINS!")