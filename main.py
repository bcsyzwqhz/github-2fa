import pyotp
import pyperclip as cp
secret_key = 'your_2fa_token'
cp.copy(pyotp.TOTP(secret_key).now())
print(cp.paste())