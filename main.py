# These codes are auto generate, don't move it.
import pyotp
import pyperclip as cp
secret_key = 'SJFSALQFNE27S3CM'
cp.copy(pyotp.TOTP(secret_key).now())
print(cp.paste())