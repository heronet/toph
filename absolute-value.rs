use std::io;

fn main() {
    let mut s_num = String::new();
    io::stdin().read_line(&mut s_num).expect("IO Error");

    let num: i32 = s_num.trim().parse().expect("NaN");
    println!("{}", num.abs() + 1);
}
