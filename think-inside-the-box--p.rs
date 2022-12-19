use std::io::stdin;

fn main() {
    let mut s_num = String::new();
    stdin().read_line(&mut s_num).expect("IO Error");
    let num = s_num.trim().parse::<u32>().expect("NAN");

    if num <= 10 {
        println!("1");
    } else if num <= 100 {
        println!("11");
    } else if num <= 1000 {
        println!("111");
    }
}
