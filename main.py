import pyotp
import pyperclip as cp
with open('2fa-token.txt','r') as file:
    secret_key = file.read()
cp.copy(pyotp.TOTP(secret_key).now())
print(cp.paste())