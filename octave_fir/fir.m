close all;
clear all;
clf;
pkg load signal;

f1 = 10000;
f2 = 15000;
delta_f = f2-f1;
Fs = 48000;
dB  = 40;
N = 127;

f =  [0.2,0.4]
hc = fir1(N-1, f,'stop')


figure
plot((-0.5:1/4096:0.5-1/4096)*Fs,20*log10(abs(fftshift(fft(hc,4096)))))
axis([0 20000 -60 20])
title('Filter Frequency Response')
grid on

fid = fopen("/home/john/Code/filter_testing/octave_fir/taps.dat",'a')
fprintf(fid, '%f, \n', hc)
fclose(fid)