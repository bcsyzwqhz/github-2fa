import pyotp
import pyperclip as cp
secret_key = 'AUTOGENERATE1145'
cp.copy(pyotp.TOTP(secret_key).now())
print(cp.paste())