for (int x = 0; x < image.width(); ++x)
{
int x0 = max(0, x - radius);
int x1 = min(image.width() - 1, x + radius);
for (int y = 0; y < image.height(); ++y)
{
int y0 = max(0, y - radius);
int y1 = min(image.height() - 1, y + radius);
max_pixel = image(x, y);
for (int u = x0; u <= x1; ++u) //note <=, not <
{
for (int v = y0; y <= y1; ++v)
{
if (image(u, v) > max_pixel)
{
max_pixel = image(u, v);
}
}
}
result(x, y) = max_pixel;
}

x=0, y=0, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3
x=0, y=0, x1=1, y1=1, max_pixel=3, u=0, v=1, result(0,0)=6, max_pixel=6
x=0, y=0, x1=1, y1=1, max_pixel=3, u=1, v=0, result(0,0)=6, max_pixel=6
x=0, y=0, x1=1, y1=1, max_pixel=3, u=1, v=1, result(0,0)=8, max_pixel=8

x=0, y=1, x1=1, y1=2, max_pixel=1, u=0, v=0, result(0,1)=3, max_pixel=3
x=0, y=1, x1=1, y1=2, max_pixel=1, u=0, v=1, result(0,1)=6, max_pixel=6
x=0, y=1, x1=1, y1=2, max_pixel=1, u=0, v=2, result(0,1)=6, max_pixel=4
x=0, y=1, x1=1, y1=2, max_pixel=1, u=1, v=0, result(0,1)=6, max_pixel=6
x=0, y=1, x1=1, y1=2, max_pixel=1, u=1, v=1, result(0,1)=8, max_pixel=8
x=0, y=1, x1=1, y1=2, max_pixel=1, u=1, v=2, result(0,1)=8, max_pixel=5

x=0, y=2, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3
x=1, y=0, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3
x=1, y=1, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3
x=1, y=2, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3
x=2, y=0, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3
x=2, y=1, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3
x=2, y=2, x1=1, y1=1, max_pixel=3, u=0, v=0, result(0,0)=3, max_pixel=3