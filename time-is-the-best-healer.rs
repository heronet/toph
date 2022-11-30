use std::io;

fn main() {
    let mut s_days = String::new();
    io::stdin().read_line(&mut s_days).expect("Input Error");
    let days: u32 = s_days.trim().parse().expect("Parse Error");
    let remaining = 3 * days - days;
    println!("{}", remaining);
}
