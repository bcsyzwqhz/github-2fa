import pyotp
import pyperclip as cp
secret_key = 'A7JU6JT73G44RSVK'
cp.copy(pyotp.TOTP(secret_key).now())
print(cp.paste())