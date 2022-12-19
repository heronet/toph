use std::io;

fn main() {
    let mut s_num = String::new();
    io::stdin().read_line(&mut s_num).expect("IO Error");
    let num: u64 = s_num.trim().parse().expect("NaN");

    let mut ans = num / 2;
    if num % 2 != 0 {
        ans += 1;
    }
    println!("{}", ans);
}
