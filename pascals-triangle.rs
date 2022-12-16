use std::io::stdin;

fn main() {
    let mut s_num = String::new();
    stdin().read_line(&mut s_num).expect("IOError");
    let num = s_num.trim().parse::<u32>().expect("NaN");
    let result = 2_u32.pow(num - 1);
    println!("{}", result);
}
