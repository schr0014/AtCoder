

"""
### input

複数の数字の受け取り
H, W = map(int, input().split())

1行の文字列を 1文字ずつのリストとして取得
list = list(input())

H行の文字列2次元配列
S = [list(input().split()) for _ in range(H)]


### logic

文字列Sの中に含まれている大文字の数
import re
re.findall('[A-Z]{1}', S)


### output

数字と文字の混合リストを1つの文字列として出力
print ("".join(map(str, list)))
"""
