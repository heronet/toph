use std::io;

fn main() {
    let mut snk = String::new();
    io::stdin().read_line(&mut snk).expect("IO Error");
    let nk: Vec<u32> = snk.split_whitespace()
        .map(|x| x.parse().expect("NaN"))
        .collect();
    let mut shours = String::new();
    io::stdin().read_line(&mut shours).expect("IO Error");
    let mut hours: Vec<u32> = shours.split_whitespace()
        .map(|x| x.parse().expect("NaN"))
        .collect::<Vec<u32>>();
    hours.sort();
    println!("{}", hours[nk[0] as usize - nk[1] as usize]);
}
