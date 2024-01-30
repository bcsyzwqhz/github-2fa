import pyotp
import pyperclip as cp
secret_key = 'HEJLSCO4NW7PEGN6'
cp.copy(pyotp.TOTP(secret_key).now())
print(cp.paste())